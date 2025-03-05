
export default function Square({value, onSelect}) {
  return (
    <td className="box__container-data" onClick={onSelect}>
        {value}
    </td>
  );
};
